# 项目
- Intel MCS-51 嵌入式开发学习
- MCS-51 8051 嵌入式单片机代码整理，为后续快速开发有个CodeBase


# 代码说明

- src

```
整理后包含完整代码的CodeBase

```

- src_sample_HC6800-ES-V2.0

```
本程序为 B 站“51 单片机入门教程”视频的示例代码，在编写时使用的是普中科技的HC6800-ES V2.0 开发板
和 A2 开发板，如图 1、图 2 所示，对于这两款开发板，此程序是完全可以使用的。

在视频录制结束后，普中科技公司又对开发板进行了升级，升级后为新版 A2 开发板，如图 3 所示，
在新版 A2 开发板中，晶振由原来的 12MHz 换成了 11.0592MHz，这将影响部分程序的计时精度，
其中，第 17 节的红外遥控代码因计时精度的影响无法运行，故笔者又对程序进行了修改，
增加了 11.0592MHz 晶振的版本，请根据开发板型号选择合适的代码查看。

另外，新版 A2 开发板的单片机型号由原来的 STC89C52 换成了 STC89C52RC，在下载程序时应注意
选择正确的型号，具体选择如图所示。
```

- 开发板

![A2](/images/board-3.png "A2")

- STC89C52单片机
  - 所属系列：51单片机系列
  - 公司：STC公司
  - 位数：8位
  - RAM：512字节
  - ROM：8K（Flash）
  - 工作频率：12MHz（本开发板使用）


# stc-isp OUTPUT

```
Checking target MCU ... 
  MCU type: STC89C52RC/LE52RC

Current H/W Option:
  . Current clock frequency: 11.146MHz
  . System use 12T mode
  . Oscillator gain is HIGH
  . Any reset source can stop WatchDog if WatchDog timer is running
  . Internal XRAM is ENABLE
  . ALE pin behaves as ALE function pin
  . Do not detect the level of P1.0 and P1.1 next download
  . Do not erase user EEPROM area at next download

  MCU type: STC89C52RC/LE52RC


Re-handshaking ... Successful			[0.593"]
Current Baudrate: 115200
Erasing MCU flash ...  OK !		[0.312"]
Programming user code ... OK !		[0.437"]
Programming OPTIONS ... OK !		[0.031"]

H/W Option upgrade to:
  . Current clock frequency: 11.146MHz
  . System use 12T mode
  . Oscillator gain is HIGH
  . Any reset source can stop WatchDog if WatchDog timer is running
  . Internal XRAM is ENABLE
  . ALE pin behaves as ALE function pin
  . Do not detect the level of P1.0 and P1.1 next download
  . Do not erase user EEPROM area at next download

  MCU type: STC89C52RC/LE52RC


  Complete !(2025-11-09 19:36:26)


```