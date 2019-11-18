#pragma once

#include <ble.h>
#include "Noncopyable.hpp"

#include <memory>

#include "nrf_ble_qwr.h"

#include "nordic_common.h"
#include "nrf.h"
#include "app_error.h"
#include "ble.h"
#include "ble_hci.h"
#include "ble_srv_common.h"
#include "ble_advdata.h"
#include "ble_advertising.h"
#include "ble_conn_params.h"
#include "nrf_sdh.h"
#include "nrf_sdh_soc.h"
#include "nrf_sdh_ble.h"
#include "app_timer.h"
#include "fds.h"
#include "peer_manager.h"
#include "bsp_btn_ble.h"

#include "ble_conn_state.h"
#include "nrf_ble_gatt.h"
#include "nrf_ble_qwr.h"
#include "nrf_pwr_mgmt.h"

namespace Ble::CustomService
{
    class CustomService;
}

namespace Ble::Stack
{


class BleStackKeeper
    :   private Utils::noncopyable
{

public:

    BleStackKeeper();
    ~BleStackKeeper() = default;

private:

    void bleStackInit();

    void bleEventHandler( ble_evt_t const* _pBleEvent, void * _pContext );


private:

    void initGapModule();

    void initGatt();

    void gattEventHandler( nrf_ble_gatt_t* p_gatt, nrf_ble_gatt_evt_t const* p_evt );

private:

    void initPeerManager();

    void peerManagerEventHandler( pm_evt_t const* _pPeerEvent );

private:

    void initAdvertising();

    void advertisingEventHandler( ble_adv_evt_t _pAdvertisingEvent );

private:

    void initConnectionParams();

    void connectionParamsEventHandler( ble_conn_params_evt_t* _pEvent );

    void connectionParamsErrorHandler( std::uint32_t _nrfError );

private:

    void initServices();

private:

    enum class EraseBondsConfig
    {
            EraseBoundsPolicy
        ,   DontEraseBounds
    };

    void startAdvertising( EraseBondsConfig _eraseBonds );

    void deleteBonds();

private:
    std::uint16_t m_connectionHandle;

    std::unique_ptr<Ble::CustomService::CustomService> m_customService;
};

std::unique_ptr<BleStackKeeper> createBleStackKeeper();

};