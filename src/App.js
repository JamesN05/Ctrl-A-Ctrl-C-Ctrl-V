import './App.css';
import personBg from './Person-for-AR.png';
import profilePic from './ProfilePic.png';
import { useState, useEffect, useRef } from 'react';

function useClock() {
  const [time, setTime] = useState(new Date());

  useEffect(() => {
    const interval = setInterval(() => setTime(new Date()), 1000);
    return () => clearInterval(interval);
  }, []);

  return time;
}

function useWebcam() {
  const videoRef = useRef(null);

  useEffect(() => {
    navigator.mediaDevices.getUserMedia({ video: true })
      .then((stream) => {
        if (videoRef.current) {
          videoRef.current.srcObject = stream;
        }
      })
      .catch((err) => console.error('Webcam error:', err));
  }, []);

  return videoRef;
}

function ClockDisplay() {
  const time = useClock();
  const [isOpen, setIsOpen] = useState(false);

  const today = time.getDate();
  const currentMonth = time.getMonth();
  const currentYear = time.getFullYear();

  const daysInMonth = new Date(currentYear, currentMonth + 1, 0).getDate();
  const firstDayOfMonth = new Date(currentYear, currentMonth, 1).getDay();
  const monthName = time.toLocaleDateString('en-IE', { month: 'long', year: 'numeric' });

  const blanks = Array(firstDayOfMonth).fill(null);
  const days = Array.from({ length: daysInMonth }, (_, i) => i + 1);
  const allCells = [...blanks, ...days];

  return (
    <div className="clock-wrapper">
      <div className="clock" onClick={() => setIsOpen(!isOpen)}>
        <span>
          {time.toLocaleDateString('en-IE', { weekday: 'long', day: 'numeric', month: 'long', year: 'numeric' })}
          {' | '}
          {time.toLocaleTimeString('en-IE', { hour: '2-digit', minute: '2-digit' })}
        </span>
        <span className={`arrow ${isOpen ? 'arrow-up' : ''}`} style={{ fontSize: '12px', opacity: 0.8 }}>∨</span>
      </div>

      {isOpen && (
        <div className="calendar">
          <h4>{monthName}</h4>
          <div className="calendar-grid">
            {['Su', 'Mo', 'Tu', 'We', 'Th', 'Fr', 'Sa'].map(d => (
              <div key={d} className="calendar-day-label">{d}</div>
            ))}
            {allCells.map((day, i) => (
              <div
                key={i}
                className={`calendar-day ${day === today ? 'today' : ''} ${!day ? 'empty' : ''}`}
              >
                {day || ''}
              </div>
            ))}
          </div>
        </div>
      )}
    </div>
  );
}

function ProfileCard() {
  return (
    <div className="card profile-card">
      <div className="profile-header">
        <img src={profilePic} alt="profile" className="avatar" />
        <div>
          <p><strong>Name:</strong> John Smith</p>
          <p><strong>Bio:</strong> Brother</p>
        </div>
      </div>
      <p><strong>Last Conversation:</strong></p>
      <p>You were speaking about the doctor appointment next week.</p>
    </div>
  );
}

function TaskCard() {
  const [isOpen, setIsOpen] = useState(false);

  return (
    <div className={`card task-card ${!isOpen ? 'collapsed' : ''}`}>
      <div className="card-header" onClick={() => setIsOpen(!isOpen)}>
        <h3>To Do</h3>
        <span className={`arrow ${isOpen ? 'arrow-up' : ''}`}>∨</span>
      </div>

      {isOpen && (
        <ul>
          <li>✅ Take medication 💊</li>
          <li>🔵 Call Dr. Murphy 📞</li>
          <li>⚪ Evening walk 🌿</li>
        </ul>
      )}
    </div>
  );
}

export default function App() {
  const videoRef = useWebcam();
  const [useWebcamBg, setUseWebcamBg] = useState(true);

  return (
    <div className="overlay">

      {/* Background — webcam or image */}
      {useWebcamBg ? (
        <video
          ref={videoRef}
          autoPlay
          playsInline
          muted
          className="bg-image"
        />
      ) : (
        <img src={personBg} alt="background" className="bg-image" />
      )}

      {/* Debug toggle box */}
      <div className="debug-box">
        <label>
          <input
            type="checkbox"
            checked={useWebcamBg}
            onChange={(e) => setUseWebcamBg(e.target.checked)}
          />
          {' '} Use Webcam
        </label>
      </div>

      <div className="top-bar">
        <ClockDisplay />
      </div>

      <div className="bottom-bar">
        <ProfileCard />
        <TaskCard />
      </div>

    </div>
  );
}
