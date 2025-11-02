// Last updated: 2025-11-02T21:26:34+05:00
// Last updated: 2025-11-03T21:26:26+05:00
// Last updated: 2025-11-05T21:26:19+05:00
// Last updated: 2025-11-07T21:26:04+05:00
// Last updated: 2025-11-08T21:24:17+05:00
// Last updated: 2025-11-10T21:24:02+05:00
// Last updated: 2025-11-10T21:23:32+05:00
// Last updated: 2025-11-12T21:22:19+05:00
// Last updated: 2025-11-14T21:21:50+05:00
// Last updated: 2025-11-15T21:21:25+05:00
// Last updated: 2025-11-15T21:21:01+05:00
// Last updated: 2025-11-17T21:19:30+05:00
// Last updated: 2025-11-19T21:12:52+05:00
// Last updated: 2025-11-19T21:12:48+05:00
// Last updated: 2025-11-16T21:11:24+05:00
// Last updated: 2025-11-16T21:10:27+05:00
// Last updated: 2025-11-16T21:10:13+05:00
// Last updated: 2025-11-16T21:09:12+05:00
// Last updated: 2025-11-20T21:08:55+05:00
// Last updated: 2025-11-20T20:56:17+05:00
// Last updated: 2025-11-20T20:52:54+05:00
// Last updated: 2025-11-20T20:52:45+05:00
// Last updated: 2025-11-20T20:34:13+05:00
// int climbStairs(int n) {
//     if (n <= 2) return n;
    
//     int first = 1, second = 2;
//     for (int i = 3; i <= n; i++) {
//         int current = first + second;
//         first = second;
//         second = current;
//     }
//     return second;
// }