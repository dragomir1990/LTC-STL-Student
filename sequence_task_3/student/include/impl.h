#pragma once
#include <iostream>
#include <sstream>
#include <deque>
#include <iterator>

/**
 * @todo Implement function that will reverse words in a sentence
 * @example "Hello there" -> "there Hello"
 * @param input - sentence with words splitted by spaces
 * @return Sentence with reversed order of words
 *
 * @warning YOU MUST USE STRING STREAMS AND STREAM ITERATORS!
 */
std::string reverseWords(const std::string& input) {
    std::istringstream iss(input);
    std::ostringstream oss;
    std::deque<std::string> wordCollector;

    std::copy(std::istream_iterator<std::string>(iss), std::istream_iterator<std::string>(), std::front_inserter(wordCollector));
    std::copy(wordCollector.begin(), --wordCollector.end(), std::ostream_iterator<std::string>(oss, " "));
    if(!wordCollector.empty()) {
        oss << wordCollector.back();
    }
    return oss.str();
}
