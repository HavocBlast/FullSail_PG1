#pragma once

#ifdef LABTESTUTILS_EXPORTS
	#define LABTESTUTILS_API __declspec(dllexport)
#else
#define LABTESTUTILS_API __declspec(dllimport)
#endif

#include <string>
#include <vector>

#pragma warning(disable:4091)

extern class LABTESTUTILS_API LabTestUtils {
	static int FindLargestStringSize(std::vector<string> words);
	
public:
	static double Tester(int testNumber, double passValue, std::vector<std::string> inputs, std::vector<std::string> expecteds, std::vector<std::string> submitteds, int gameMode);
	static void AppendDoubleWithTimestampToFile(double input);
	static bool IsFloatRepresentation(const std::string& input);
	static std::string ProcessString(const std::string& input);
};