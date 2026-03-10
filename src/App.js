import './App.css';
import personBg from './Person-for-AR.png';
import profilePic from './ProfilePic.png';
import { useState, useEffect } from 'react';

function useClock() {
  const [time, setTime] = useState(new Date());

  useEffect(() => {
    const interval = setInterval(() => setTime(new Date()), 1000);
    return () => clearInterval(interval);
  }, []);

  return time;
}

function ClockDisplay() {
  const time = useClock();

  return (
    <div className="clock">
      <p>{time.toLocaleDateString('en-IE', { weekday: 'long', day: 'numeric', month: 'long', year: 'numeric' })}</p>
      <p>{time.toLocaleTimeString('en-IE', { hour: '2-digit', minute: '2-digit' })}</p>
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
  return (
    <div className="card task-card">
      <div className="card-header">
        <h3>Today</h3>
        <span>⌄</span>
      </div>
      <ul>
        <li>✅ Take medication 💊</li>
        <li>🔵 Call Dr. Murphy 📞</li>
        <li>⚪ Evening walk 🌿</li>
      </ul>
    </div>
  );
}

export default function App() {
  return (
    <div className="overlay">
      <img src={personBg} alt="background" className="bg-image" />
      <ClockDisplay />
      <ProfileCard />
      <TaskCard />
    </div>
  );
}
