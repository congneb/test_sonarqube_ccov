#include <stdio.h>




typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef char bool;


#define true 1
#define false 0






/////////////////////



/** I2C Register Declaration. */
typedef struct {
  unsigned int  IPVERSION;                     /**< IP VERSION Register                                */
   unsigned int EN;                            /**< Enable Register                                    */
   unsigned int CTRL;                          /**< Control Register                                   */
   unsigned int CMD;                           /**< Command Register                                   */
  unsigned int  STATE;                         /**< State Register                                     */
  unsigned int  STATUS;                        /**< Status Register                                    */
   unsigned int CLKDIV;                        /**< Clock Division Register                            */
   unsigned int SADDR;                         /**< Follower Address Register                          */
   unsigned int SADDRMASK;                     /**< Follower Address Mask Register                     */
  unsigned int  RXDATA;                        /**< Receive Buffer Data Register                       */
  unsigned int  RXDOUBLE;                      /**< Receive Buffer Double Data Register                */
  unsigned int  RXDATAP;                       /**< Receive Buffer Data Peek Register                  */
  unsigned int  RXDOUBLEP;                     /**< Receive Buffer Double Data Peek Register           */
   unsigned int TXDATA;                        /**< Transmit Buffer Data Register                      */
   unsigned int TXDOUBLE;                      /**< Transmit Buffer Double Data Register               */
   unsigned int IF;                            /**< Interrupt Flag Register                            */
   unsigned int IEN;                           /**< Interrupt Enable Register                          */
  unsigned int       RESERVED0[1007U];              /**< Reserved for future use                            */
  unsigned int  IPVERSION_SET;                 /**< IP VERSION Register                                */
   unsigned int EN_SET;                        /**< Enable Register                                    */
   unsigned int CTRL_SET;                      /**< Control Register                                   */
   unsigned int CMD_SET;                       /**< Command Register                                   */
  unsigned int  STATE_SET;                     /**< State Register                                     */
  unsigned int  STATUS_SET;                    /**< Status Register                                    */
   unsigned int CLKDIV_SET;                    /**< Clock Division Register                            */
   unsigned int SADDR_SET;                     /**< Follower Address Register                          */
   unsigned int SADDRMASK_SET;                 /**< Follower Address Mask Register                     */
  unsigned int  RXDATA_SET;                    /**< Receive Buffer Data Register                       */
  unsigned int  RXDOUBLE_SET;                  /**< Receive Buffer Double Data Register                */
  unsigned int  RXDATAP_SET;                   /**< Receive Buffer Data Peek Register                  */
  unsigned int  RXDOUBLEP_SET;                 /**< Receive Buffer Double Data Peek Register           */
   unsigned int TXDATA_SET;                    /**< Transmit Buffer Data Register                      */
   unsigned int TXDOUBLE_SET;                  /**< Transmit Buffer Double Data Register               */
   unsigned int IF_SET;                        /**< Interrupt Flag Register                            */
   unsigned int IEN_SET;                       /**< Interrupt Enable Register                          */
  unsigned int       RESERVED1[1007U];              /**< Reserved for future use                            */
  unsigned int  IPVERSION_CLR;                 /**< IP VERSION Register                                */
   unsigned int EN_CLR;                        /**< Enable Register                                    */
   unsigned int CTRL_CLR;                      /**< Control Register                                   */
   unsigned int CMD_CLR;                       /**< Command Register                                   */
  unsigned int  STATE_CLR;                     /**< State Register                                     */
  unsigned int  STATUS_CLR;                    /**< Status Register                                    */
   unsigned int CLKDIV_CLR;                    /**< Clock Division Register                            */
   unsigned int SADDR_CLR;                     /**< Follower Address Register                          */
   unsigned int SADDRMASK_CLR;                 /**< Follower Address Mask Register                     */
  unsigned int  RXDATA_CLR;                    /**< Receive Buffer Data Register                       */
  unsigned int  RXDOUBLE_CLR;                  /**< Receive Buffer Double Data Register                */
  unsigned int  RXDATAP_CLR;                   /**< Receive Buffer Data Peek Register                  */
  unsigned int  RXDOUBLEP_CLR;                 /**< Receive Buffer Double Data Peek Register           */
   unsigned int TXDATA_CLR;                    /**< Transmit Buffer Data Register                      */
   unsigned int TXDOUBLE_CLR;                  /**< Transmit Buffer Double Data Register               */
   unsigned int IF_CLR;                        /**< Interrupt Flag Register                            */
   unsigned int IEN_CLR;                       /**< Interrupt Enable Register                          */
  unsigned int       RESERVED2[1007U];              /**< Reserved for future use                            */
  unsigned int  IPVERSION_TGL;                 /**< IP VERSION Register                                */
   unsigned int EN_TGL;                        /**< Enable Register                                    */
   unsigned int CTRL_TGL;                      /**< Control Register                                   */
   unsigned int CMD_TGL;                       /**< Command Register                                   */
  unsigned int  STATE_TGL;                     /**< State Register                                     */
  unsigned int  STATUS_TGL;                    /**< Status Register                                    */
   unsigned int CLKDIV_TGL;                    /**< Clock Division Register                            */
   unsigned int SADDR_TGL;                     /**< Follower Address Register                          */
   unsigned int SADDRMASK_TGL;                 /**< Follower Address Mask Register                     */
  unsigned int  RXDATA_TGL;                    /**< Receive Buffer Data Register                       */
  unsigned int  RXDOUBLE_TGL;                  /**< Receive Buffer Double Data Register                */
  unsigned int  RXDATAP_TGL;                   /**< Receive Buffer Data Peek Register                  */
  unsigned int  RXDOUBLEP_TGL;                 /**< Receive Buffer Double Data Peek Register           */
   unsigned int TXDATA_TGL;                    /**< Transmit Buffer Data Register                      */
   unsigned int TXDOUBLE_TGL;                  /**< Transmit Buffer Double Data Register               */
   unsigned int IF_TGL;                        /**< Interrupt Flag Register                            */
   unsigned int IEN_TGL;                       /**< Interrupt Enable Register                          */
} I2C_TypeDef;
/** @} End of group BGM22_I2C */

/// I2CSPM Peripheral
typedef I2C_TypeDef sl_i2cspm_t;









/////////////////////
#define SL_I2CSPM_QWIIC_PERIPHERAL 0x00


/** Return codes for single Controller mode transfer function. */
typedef enum {
  /* In progress code (>0) */
  i2cTransferInProgress = 1,    /**< Transfer in progress. */

  /* Complete code (=0) */
  i2cTransferDone       = 0,    /**< Transfer completed successfully. */

  /* Transfer error codes (<0). */
  i2cTransferNack       = -1,   /**< NACK received during transfer. */
  i2cTransferBusErr     = -2,   /**< Bus error during transfer (misplaced START/STOP). */
  i2cTransferArbLost    = -3,   /**< Arbitration lost during transfer. */
  i2cTransferUsageFault = -4,   /**< Usage fault. */
  i2cTransferSwFault    = -5    /**< SW fault. */
} I2C_TransferReturn_TypeDef;






/**
 * @brief
 *   Indicate plain write sequence: S+ADDR(W)+DATA0+P.
 * @details
 *   @li S - Start
 *   @li ADDR(W) - address with W/R bit cleared
 *   @li DATA0 - Data taken from buffer with index 0
 *   @li P - Stop
 */
#define I2C_FLAG_WRITE          0x0001

/**
 * @brief
 *   Indicate plain read sequence: S+ADDR(R)+DATA0+P.
 * @details
 *   @li S - Start
 *   @li ADDR(R) - Address with W/R bit set
 *   @li DATA0 - Data read into buffer with index 0
 *   @li P - Stop
 */
#define I2C_FLAG_READ           0x0002

/**
 * @brief
 *   Indicate combined write/read sequence: S+ADDR(W)+DATA0+Sr+ADDR(R)+DATA1+P.
 * @details
 *   @li S - Start
 *   @li Sr - Repeated start
 *   @li ADDR(W) - Address with W/R bit cleared
 *   @li ADDR(R) - Address with W/R bit set
 *   @li DATAn - Data written from/read into buffer with index n
 *   @li P - Stop
 */
#define I2C_FLAG_WRITE_READ     0x0004

/**
 * @brief
 *   Indicate write sequence using two buffers: S+ADDR(W)+DATA0+DATA1+P.
 * @details
 *   @li S - Start
 *   @li ADDR(W) - Address with W/R bit cleared
 *   @li DATAn - Data written from buffer with index n
 *   @li P - Stop
 */
#define I2C_FLAG_WRITE_WRITE    0x0008


typedef struct {
  /**
   * @brief
   *   Address to use after (repeated) start.
   * @details
   *   Layout details, A = Address bit, X = don't care bit (set to 0):
   *   @li 7 bit address - Use format AAAA AAAX
   *   @li 10 bit address - Use format XXXX XAAX AAAA AAAA
   */
  int addr;

  /** Flags defining sequence type and details, see I2C_FLAG_ defines. */
  int flags;

  /**
   * Buffers used to hold data to send from or receive into, depending
   * on sequence type.
   */
  struct {
    /** Buffer used for data to transmit/receive, must be @p len long. */
    unsigned char  *data;

    /**
     * Number of bytes in @p data to send or receive. Notice that when
     * receiving data to this buffer, at least 1 byte must be received.
     * Setting @p len to 0 in the receive case is considered a usage fault.
     * Transmitting 0 bytes is legal, in which case only the address
     * is transmitted after the start condition.
     */
    int len;
  } buf[2];
} I2C_TransferSeq_TypeDef;

