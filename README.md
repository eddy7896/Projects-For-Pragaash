# 🌟 Pragaash: UT-Level State Innovation Showcase
## Jammu & Kashmir Ecosystem Strengthening Initiative

![Project Status](https://img.shields.io/badge/Status-Active-success?style=for-the-badge)
![Event](https://img.shields.io/badge/Event-Pragaash%202026-blueviolet?style=for-the-badge)
![Organization](https://img.shields.io/badge/Organized%20By-Pi%20Jam%20Foundation-orange?style=for-the-badge)

---

## 📖 Overview

**Pragaash** (meaning *Light* or *Illumination* in Kashmiri) is a premier UT-level Innovation Showcase organized by the **Pi Jam Foundation**. This initiative serves as a platform to celebrate and scale student-led innovations from various districts across the Kashmir Valley.

This repository is dedicated to the **Chillai Kalan Hackathon** projects. During the 40-day period of "Chillai Kalan"—the harshest phase of winter in Kashmir—students developed innovative solutions to local problems. This codebase serves as the central hub where mentors refine these "prototypes" into professional-grade, showcase-ready innovations.

---

## 🎯 Our Mission

The Pi Jam Foundation aims to provide students with the digital skills and computational thinking needed to solve real-world problems. Through Pragaash, we aim to:
- **Strengthen the Ecosystem:** Bridging the gap between school-level innovation and professional development.
- **Empower Students:** Turning student ideas from the Chillai Kalan Hackathon into scalable solutions.
- **Promote Local Innovation:** Solving challenges specific to the Jammu & Kashmir region (Flood prediction, agriculture, winter safety, etc.).

---

## 📂 Repository Architecture

We maintain a "Monorepo-lite" structure where each student project is managed as an independent module.

```text
root/
├── [project-category]/
│   ├── [project-slug]/
│   │   ├── src/                # Core logic & source code
│   │   ├── assets/             # Images, diagrams, hardware schematics
│   │   ├── docs/               # Technical specs & user manuals
│   │   ├── README.md           # Project-specific documentation
│   │   └── requirements.txt    # OR package.json / pubspec.yaml
├── .gitignore                  # Global ignore rules
└── README.md                   # This document
```

### Common Categories
- `environmental-tech`: Flood alerts, water conservation, etc.
- `agri-tech`: Smart irrigation, vertical farming.
- `safety-health`: Winter navigation, health monitoring.
- `education`: Interactive learning tools.

---

## 🛠 Mentor Contribution Workflow

To maintain the integrity of the `main` branch, all mentors must follow this rigorous Git flow:

### 1. Synchronization
Always start by ensuring your local environment matches the latest stable release.
```bash
git checkout main
git pull origin main
```

### 2. Branch Assignment
Every mentor is assigned a dedicated branch.
- **Naming Convention:** `mentor/[your-name]` or `feature/[project-id]`
- **Create your branch (first time only):**
  ```bash
  git checkout -b mentor/john-doe
  ```
- **Switching to branch:**
  ```bash
  git checkout mentor/john-doe
  ```

### 3. Project Initialization
When starting a new project assigned to you:
1. Create a sub-folder using kebab-case: `mkdir [project-category]/smart-flood-alert`.
2. Initialize the project inside that folder.
3. **DO NOT** add files to the root directory.

### 4. The "Update & Push" Cycle
```bash
git add .
git commit -m "feat([project-slug]): detailed description of changes"
git push origin mentor/[your-name]
```

---

## 💎 Technical Standards

Mentors are expected to elevate the student projects to meet these standards:

- **Modularity:** Code should be divided into logical components/modules.
- **Documentation:** Every project must have its own `README.md` inside its folder.
- **Clean Code:** Use meaningful variable names and follow language-specific style guides (PEP8 for Python, Airbnb for JS).
- **Version Control:** Commit messages should follow [Conventional Commits](https://www.conventionalcommits.org/).

> [!WARNING]
> **Credential Safety:** Never commit API keys, environment variables, or private sensitive data. Use `.env` files and ensure they are ignored.

---

## 🤝 Collaboration & Support

- **Pi Jam Mentors Group:** Check the assigned communication channel.
- **Technical Lead:** Reach out for architectural guidance.
- **Program Coordinator:** For event-related queries.

---

<div align="center">
  <br>
  <i>"Nurturing Problem Solvers and Creators of Tommorow"</i>
  <br>
  <b>Pi Jam Foundation 🏺</b>
</div>
