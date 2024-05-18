vector<int> getFrequencies(vector<int>& v) 
{
    vector<int> Answer(2);
    map<int, int> Map;
    for(auto ch : v)
        Map[ch]++;
    int MaxValue = INT_MIN, MinValue = INT_MAX, MaxFreq = INT_MIN, MinFreq = INT_MAX;
    for(auto ch : Map)
    {
        if(ch.second > MaxFreq)
        {
            MaxFreq = ch.second;
            MaxValue = ch.first;
        }
        if(ch.second < MinFreq)
        {
            MinFreq = ch.second;
            MinValue = ch.first;
        }
    }
    Answer[0] = MaxValue;
    Answer[1] = MinValue;
    return Answer;
}