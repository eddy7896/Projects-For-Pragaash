# 🌟 Pragaash: J&K State Innovation Showcase

![Pragaash Banner](https://img.shields.io/badge/Pragaash-2024-blueviolet?style=for-the-badge&logo=rocket)
![Organization](https://img.shields.io/badge/Organized%20By-Pi%20Jam%20Foundation-orange?style=for-the-badge)
![Region](https://img.shields.io/badge/Region-Jammu%20%26%20Kashmir-green?style=for-the-badge)

Welcome to the official mentoring codebase for **Pragaash**, a UT-level State Innovation Showcase for Jammu & Kashmir. This initiative, organized by the **Pi Jam Foundation**, serves as the culmination for the innovative projects submitted by students during the **Chillai Kalan Hackathon**.

---

## 🚀 Purpose

This repository is the central hub for projects being developed and refined by mentors. Each project represents a spark of innovation from the youth of J&K, now being professionally structured and enhanced for the final showcase.

## 📂 Repository Structure

To maintain a clean and scalable environment, we follow a strict directory-per-project convention:

```text
root/
├── project-name-alpha/
│   ├── src/
│   ├── docs/
│   └── README.md
├── project-name-beta/
│   ├── ...
└── .gitignore
```

> [!IMPORTANT]
> **Every project must reside in its own sub-folder.** Do not place files directly in the root directory except for repository-wide configuration files (like `.gitignore`, `README.md`).

---

## 🛠 Mentor Workflow

To ensure seamless collaboration and version control, mentors are assigned individual branches. Follow these steps to contribute:

### 1. Standard Setup
Before starting, ensure you have cloned the repository and are on the `main` branch.

```bash
git checkout main
git pull origin main
```

### 2. Prepare Your Project
Create your designated project folder in your local workplace.

```bash
mkdir project-name
cd project-name
# Initialize your project files here
```

### 3. Contribution Cycle
Each mentor works on a specific branch assigned to them (e.g., `mentor/your-name` or `feature/project-id`).

1. **Switch to your branch:**
   ```bash
   git checkout your-assigned-branch
   ```
2. **Sync with Main** (Optional but recommended):
   ```bash
   git merge main
   ```
3. **Commit your changes:**
   ```bash
   git add project-name/
   git commit -m "feat: initial commit for [Project Name]"
   ```
4. **Push to your branch:**
   ```bash
   git push origin your-assigned-branch
   ```

---

## 📜 Guidelines for Mentors

- **Consistent Naming:** Use kebab-case for folder names (e.g., `smart-irrigation-system`).
- **Documentation:** Every project folder should include its own `README.md` explaining the project's goal, tech stack, and how to run it.
- **Clean Code:** Ensure you follow the best practices for the respective programming language/framework used.
- **Regular Updates:** Push your progress frequently to your assigned branch to avoid large, conflicting merges later.

---

## 🤝 Support & Collaboration

If you encounter any issues with the repository structure or git workflow:

- **Organizer:** Pi Jam Foundation
- **Channel:** [Insert Discord/Slack/WhatsApp Link Here]
- **Contact:** [Insert Coordinator Contact Info]

---

<p align="center">
  <i>Empowering the next generation of innovators in Jammu & Kashmir.</i><br>
  <b>Pi Jam Foundation 🏺</b>
</p>
