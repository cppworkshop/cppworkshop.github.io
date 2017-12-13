#ifndef _WORD_EVALUATOR_HPP_
#define _WORD_EVALUATOR_HPP_

#include "evaluator.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include "base64.hpp"
#include "util.hpp"

using namespace std;

class WordEvaluator : Evaluator
{
public:
    void parse_data(int line,
                    string& comment_id,
                    string& comment,
                    string& comment_creation_time,
                    string& creator_name,
                    string& creator_id,
                    string& post_id,
                    string& page_name,
                    int post_share_count,
                    string& post_type,
                    string& post_creation_time);

    bool contains_word(const string& word);

    void print();
private:
    std::unordered_map<std::string, int> _word_counts;
};

#endif
