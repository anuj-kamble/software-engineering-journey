# 🌳 Git Day 01 - Introduction to Git

**Date:** 08 August 2026

---

# 🎯 Objectives

- Understand why Git exists.
- Learn what a Git repository is.
- Initialize my first Git repository.
- Understand the Git workflow.
- Make my first Git commit.

---

# 🤔 Why was Git invented?

Imagine working on a project with multiple developers.

Problems:

- Files get overwritten.
- Old versions are lost.
- No way to know who changed what.
- Difficult to return to an older version.

Git solves these problems by keeping a complete history of the project.

---

# 📦 What is a Git Repository?

A Git repository is a folder that stores:

- Project files
- Complete project history
- Every commit
- Branches
- Configuration

A Git repository is created using:

```bash
git init
```

This command creates a hidden folder named:

```
.git
```

The `.git` folder contains all Git metadata and history.

---

# 📂 Git Repository Structure

```
SDE/
│
├── .git/
├── .gitignore
├── README.md
├── CPP/
├── Notes/
├── Git/
└── Projects/
```

---

# 🌟 Why is `.git` Hidden?

The `.git` folder contains Git's internal database.

Users should not modify its contents manually.

Git manages everything inside `.git` automatically.

---

# 📊 Git Workflow

Working Directory

↓

git add

↓

Staging Area

↓

git commit

↓

Git History

---

# 📁 Working Directory

The Working Directory contains the files you are currently editing.

Example:

```
CPP/
    Day01.cpp
```

---

# 📌 Staging Area

The Staging Area is a preparation area.

Files added using:

```bash
git add .
```

are **ready to be committed**, but are not yet part of Git history.

---

# 📸 Commit

A commit is a snapshot of the project at a specific point in time.

Example:

```bash
git commit -m "Day 01: First C++ program and understand program execution"
```

Every commit has:

- Unique Commit Hash
- Author
- Date
- Commit Message

---

# 📜 Git Commands Learned

## Initialize Repository

```bash
git init
```

Creates a Git repository.

---

## Check Repository Status

```bash
git status
```

Displays:

- Current branch
- Untracked files
- Modified files
- Staged files

---

## Add Files

```bash
git add .
```

Moves all files from the current folder into the Staging Area.

`.` means:

```
Current Folder
```

---

## Commit Changes

```bash
git commit -m "message"
```

Creates a permanent snapshot of the staged files.

---

## View Commit History

```bash
git log
```

Displays the history of all commits.

---

# 📄 .gitignore

Purpose:

Ignore files that should not be tracked.

Example:

```
*.exe
.vscode/
```

Reason:

- Executable files can be recreated.
- Editor settings are usually personal.

---

# 📖 My First Commit

Commit Message

```
Day 01: First C++ program and understand program execution
```

Commit Hash

```
c53c483
```

---

# 💡 Important Concepts

## Git does NOT automatically save changes.

It waits for the developer to decide what should become part of history.

---

## `git add`

Moves selected files into the Staging Area.

It does NOT create history.

---

## `git commit`

Creates a permanent snapshot.

---

## `git status`

Shows the current state of the repository.

---

## `git log`

Displays the history of commits.

---

# 🏆 Achievements

✅ Initialized my first Git repository.

✅ Learned the Git workflow.

✅ Understood the Staging Area.

✅ Created a `.gitignore` file.

✅ Made my first Git commit.

✅ Viewed commit history using `git log`.

---

# 🤔 Questions for Tomorrow

- Why do branches exist?
- What is HEAD?
- Why do merge conflicts happen?
- How does Git store snapshots efficiently?
- How does Git compare changes?

---

# 🎓 My Own Words

Today I understood that Git is much more than a backup tool.

Git records the history of my project through commits.

A commit is like taking a photograph of my project at a specific moment.

Before a commit, files are placed in the Staging Area using `git add`.

Only after I run `git commit` do those changes become part of my project's history.

I also learned that `.gitignore` helps keep the repository clean by excluding generated files like `.exe` and personal editor settings.