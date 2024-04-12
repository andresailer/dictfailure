#include <string>
namespace myProject {
  namespace sim {
    class TypeName : public std::pair<std::string, std::string> {
    public:
      TypeName(const std::pair<std::string, std::string>& c)
        : std::pair<std::string, std::string>(c) {}
      /// Initializing constructor
      TypeName(const std::string& typ, const std::string& nam)
        : std::pair<std::string, std::string>(typ, nam) {}
    };
  }    // End namespace sim
}      // End namespace myProject


namespace myProject {
  namespace dict {
    struct DictCreation  {
    };
  } // dict
} //myProject

typedef myProject::dict::DictCreation DictCreation;

#if defined(__CINT__) || defined(__MAKECINT__) || defined(__CLING__) || defined(__ROOTCLING__)

#pragma link C++ class myProject::dict::DictCreation;

#endif //cint and __friends__
