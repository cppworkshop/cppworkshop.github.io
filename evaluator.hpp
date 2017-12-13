#ifndef _EVALUATOR_HPP_
#define _EVALUATOR_HPP_

#include <string>

using namespace std;

class Evaluator
{
public:
	virtual void parse_data(int line,
	                        string& comment_id,
							string& comment,
							string& comment_creation_time,
                            string& creator_name,
							string& creator_id,
							string& post_id,
							string& page_name,
							int post_share_count,
							string& post_type,
							string& post_creation_time) = 0;
};

#endif
