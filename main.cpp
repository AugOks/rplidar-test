
#include "rplidar_sdk/sdk/include/sl_lidar_driver.h"

int main() {

    auto driver =  sl::createLidarDriver().value;
    driver->connect(sl::createSerialPortChannel("/dev/ttyUSB0", 115200).value);
    if (driver->isConnected()) {
        sl_lidar_response_device_info_t info;
        driver->getDeviceInfo(info);
        driver->setMotorSpeed(2<<16);
    }
}
