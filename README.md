# leetcode

[![Sync Status](https://github.com/sabihul2110/leetcode/actions/workflows/sync_leetcode.yml/badge.svg)](https://github.com/sabihul2110/leetcode/actions/workflows/sync_leetcode.yml)

Automated LeetCode submission archive.

## Specifications

| Component | Detail |
| :--- | :--- |
| **Profile** | [sabihul2110](https://leetcode.com/u/sabihul2110/) |
| **Pipeline** | GitHub Actions (`joshcai/leetcode-sync`) |
| **Languages** | C++, Java, Python |

## Architecture

* **Execution:** Source code and inline complexity notes are submitted natively on LeetCode.
* **Synchronization:** A scheduled workflow fetches accepted code, execution metrics, and problem constraints daily.
* **Storage:** Submissions are mapped to isolated problem directories. Multi-language solutions to the same problem are retained concurrently as independent files.
