#include "Adapter/File/CORSHeadersFromJSONFile.h"

namespace File {


    CORSHeadersFromJSONFile::CORSHeadersFromJSONFile(std::unique_ptr<Foundation::IO::JSONFileReaderInterface> fileReader)
        : _headers(),
          _fileReader(std::move(fileReader))
    {}

    std::map<std::string, std::string> CORSHeadersFromJSONFile::headers()
    {
        _headers["Access-Control-Allow-Origin"]      = _fileReader->fetch("allow_origins");
        _headers["Access-Control-Allow-Credentials"] = _fileReader->fetch("allow_credentials");
        _headers["Access-Control-Request-Method"]    = _fileReader->fetch("allow_http_methods");
        _headers["Access-Control-Request-Headers"]   = _fileReader->fetch("allow_http_headers");

        return _headers;
    }


}
