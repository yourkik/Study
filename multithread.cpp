//#include <iostream>
//#include <vector>
//#include <thread>
//#include <chrono>
//
//using namespace std;
//
//bool isPrime(int num) {
//    if (num < 2) return false;
//    for (int i = 2; i <= num / 2; ++i) {
//        if (num % i == 0) return false;
//    }
//    return true;
//}
//
//void findPrimes(int start, int end, vector<int>& primes) {
//    for (int i = start; i <= end; ++i) {
//        if (isPrime(i)) {
//            primes.push_back(i);
//        }
//    }
//}
//
//int main() {
//    vector<int> primes;
//    vector<thread> threads;
//    int numThreads = 10;
//    int chunkSize = 1000;
//    int start = 2;
//    int end = 10000;
//    int numPrimes = 0;
//
//    auto startTime = chrono::high_resolution_clock::now();
//
//    // Create threads
//    for (int i = 0; i < numThreads; ++i) {
//        int threadStart = start + i * chunkSize;
//        int threadEnd = threadStart + chunkSize - 1;
//        threads.emplace_back(findPrimes, threadStart, threadEnd, ref(primes));
//    }
//
//    // Wait for threads to finish
//    for (auto& thread : threads) {
//        thread.join();
//    }
//
//    auto endTime = chrono::high_resolution_clock::now();
//
//    // Count number of primes found
//    numPrimes = primes.size();
//
//    // Print primes
//    for (auto prime : primes) {
//        cout << prime << " ";
//    }
//
//    cout << endl << "Number of primes found: " << numPrimes << endl;
//
//    auto duration = chrono::duration_cast<chrono::milliseconds>(endTime - startTime);
//    cout << "Time taken: " << duration.count() << "ms" << endl;
//
//    return 0;
//}
