#ifndef ASSET_SERVICE_H_H
#define ASSET_SERVICE_H_H

#include "services/service.h"
#include "asset_loaders/asset_loader.h"
#include <map>

namespace trillek
{

class asset_service : public service
{
    public:
        asset_service(client* _client);
        virtual ~asset_service();

        data* load(std::string file);
        void register_asset_loader(std::string extension,
                                   asset_loader* new_asset_loader);
    protected:
    private:
        std::map<std::string,std::shared_ptr<asset_loader>> asset_loaders;
};

}

#endif // ASSET_SERVICE_H_H
