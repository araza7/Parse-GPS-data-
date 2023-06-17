#ifndef GPS_PARSER_H
#define GPS_PARSER_H

#include <string>
using namespace std;
//std namespace
// Struct to store GPS parameters
struct GPSData {
    string time;
    double latitude;
    double longitude;
};

// Function to parse GPS data
bool parse_gps_data(const string& packet, GPSData& data);

#endif // GPS_PARSER_H
