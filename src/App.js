import './App.css';
import personBg from './Person-for-AR.png';

function ProfileCard() {
  return (
    <div className="card profile-card">
      <div className="profile-header">
        <img src="https://via.placeholder.com/40" alt="profile" className="avatar" />
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
      <ProfileCard />
      <TaskCard />
    </div>
  );
}
