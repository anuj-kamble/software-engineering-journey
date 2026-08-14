# Day 06 – Git Commands

## Objective

Store today's C++ programs in GitHub and maintain version history of the project.

---

# Step 1 – Check Repository Status

```bash
git status
```

Purpose

Shows modified, new and deleted files.

---

# Step 2 – Stage Files

To stage all files

```bash
git add .
```

Or stage only Day 06 files

```bash
git add CPP/Day06
git add Notes/Day06.md
git add Git/Day06.md
```

---

# Step 3 – Verify Staged Files

```bash
git status
```

Files should appear under:

```
Changes to be committed
```

---

# Step 4 – Commit Changes

For C++ programs

```bash
git commit -m "Day 06: Nested loops and basic patterns"
```

For documentation

```bash
git commit -m "Add Day 06 notes and Git documentation"
```

---

# Step 5 – Push to GitHub

```bash
git push
```

Uploads local commits to the remote GitHub repository.

---

# Step 6 – Verify Repository

```bash
git status
```

Expected output

```
On branch main
Your branch is up to date with 'origin/main'.

nothing to commit, working tree clean
```

---

# Repository Structure After Day 06

```
CPP/
└── Day06/
    ├── 01_square_star_pattern.cpp
    ├── 02_right_triangle_star.cpp
    ├── 03_number_triangle.cpp
    └── 04_inverted_star_pattern.cpp

Notes/
└── Day06.md

Git/
└── Day06.md
```

---

# Commands Used Today

```bash
git status

git add .

git status

git commit -m "Day 06: Nested loops and basic patterns"

git push

git status
```

---

# Git Concepts Learned

- Working Directory
- Staging Area
- Commit
- Push
- Repository Status
- Version History

---

# Best Practices

- Check `git status` before committing.
- Write meaningful commit messages.
- Commit related changes together.
- Push after successful testing.
- Keep documentation updated with code.

---

# Day 06 Completed

Repository now contains:

- Nested Loop Programs
- Pattern Programs
- Day 06 Notes
- Day 06 Git Documentation

Next Milestone:

➡️ **Day 07 – Revision Day**