void Sequence(int x, vector<int> &Answer)
{
    if(x == 0)
        return;
    Sequence(x - 1, Answer);
    Answer.push_back(x);
}
vector<int> printNos(int x) 
{
    vector<int> Answer;
    Sequence(x, Answer);
    return Answer;
}