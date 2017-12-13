#include "word_evaluator.hpp"

void WordEvaluator::parse_data(int line,
                               string& comment_id,
                               string& comment,
                               string& comment_creation_time,
                               string& creator_name,
                               string& creator_id,
                               string& post_id,
                               string& page_name,
                               int post_share_count,
                               string& post_type,
                               string& post_creation_time)
{
    string decoded_comment = base64_decode(comment);
    vector<string> words = split(decoded_comment, ' ');

    for (const string& word : words)
    {
        if (!contains_word(word))
        {
            _word_counts[word] = 1;
        }
        else
        {
            _word_counts[word]++;
        }
    }
}

bool WordEvaluator::contains_word(const string& word)
{
    for (const auto& n : _word_counts)
    {
        if (n.first.compare(word) == 0)
        {
            return true;
        }
    }

    return false;
}

void WordEvaluator::print()
{
    for (const auto& n : _word_counts)
    {
        if (n.second > 10){
            cout << n.first << ": " << n.second << endl;
        }
    }
}
