# Day 05 — Git

## 🎯 Goal

Track and version-control the C++ loop work completed during Day 05 of the SDE Journey.

---

## 📁 Day 05 Files

```text
CPP/Day05/
├── 01_count_1_to_10.cpp
├── 02_count_10_to_1.cpp
├── 03_even_numbers.cpp
├── 04_even_numbers.cpp
├── 05_sum_1_to_5.cpp
├── 06_sum_even_numbers.cpp
├── 07_count_even_numbers.cpp
├── 08_count_greater_than_5.cpp
└── 09_sum_greater_than_5.cpp
```

Git documentation:

```text
Git/Day05.md
```

---

## 🔍 Check Repository Status

```bash
git status
```

Use this to see modified, new, deleted, and untracked files and whether the working tree is clean.

---

## ➕ Stage Day 05 Files

Stage the Day 05 C++ folder:

```bash
git add CPP/Day05/
```

Stage this Git notes file:

```bash
git add Git/Day05.md
```

Or stage all changes:

```bash
git add .
```

---

## 👀 Verify Staged Changes

```bash
git status
```

The Day 05 files should appear under:

```text
Changes to be committed
```

---

## 📝 Commit Day 05

Recommended commit:

```bash
git commit -m "Day 05: Loops in C++"
```

The commit creates a saved checkpoint in the local Git history.

---

## 🚀 Push to GitHub

```bash
git push
```

This sends the local commit to the remote GitHub repository.

The SDE Journey uses the `main` branch.

---

## ✅ Verify the Push

```bash
git status
```

Expected clean state:

```text
On branch main
Your branch is up to date with 'origin/main'.

nothing to commit, working tree clean
```

---

## 🔄 Day 05 Git Workflow

```text
Write C++ programs
        ↓
Test programs
        ↓
git status
        ↓
git add .
        ↓
git status
        ↓
git commit -m "Day 05: Loops in C++"
        ↓
git push
        ↓
git status
        ↓
Working tree clean
```

---

## 🧠 Git Concepts Reinforced

### Working Directory

The project files currently being created or edited.

```text
CPP/Day05/
Git/Day05.md
```

### Staging Area

The changes selected for the next commit.

```bash
git add .
```

### Commit

A saved checkpoint in local Git history.

```bash
git commit -m "Day 05: Loops in C++"
```

### Remote Repository

The GitHub copy of the repository.

```bash
git push
```

---

## 📌 Important Difference

```text
git add
   ↓
Staging Area
   ↓
git commit
   ↓
Local Repository
   ↓
git push
   ↓
GitHub
```

`git add` stages changes.

`git commit` records those staged changes locally.

`git push` sends local commits to GitHub.

---

## 🔎 Useful Commands

Check repository state:

```bash
git status
```

View compact commit history:

```bash
git log --oneline
```

Stage all changes:

```bash
git add .
```

Create the Day 05 commit:

```bash
git commit -m "Day 05: Loops in C++"
```

Push commits:

```bash
git push
```

---

## 🧹 Final Day 05 Git Checklist

```text
[ ] Day 05 C++ programs created
[ ] Programs tested successfully
[ ] git status checked
[ ] Day 05 files staged
[ ] Staged changes verified
[ ] Day 05 commit created
[ ] Commit pushed to GitHub
[ ] Final git status checked
[ ] Working tree clean
```

---

## 📊 Day 05 Git Status

```text
[✅] Day 05 C++ work organized
[✅] 9 loop programs included
[✅] Git workflow documented
[✅] Commit message prepared
[ ] Commit
[ ] Push
[ ] Final clean-status verification
```
