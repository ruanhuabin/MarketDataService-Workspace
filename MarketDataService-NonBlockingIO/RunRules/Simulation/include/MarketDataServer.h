/**\file */
#ifndef SLIC_DECLARATIONS_MarketDataServer_H
#define SLIC_DECLARATIONS_MarketDataServer_H
#include "MaxSLiCInterface.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define MarketDataServer_USE_NETWORK_MANAGER (1)
#define MarketDataServer_PCIE_ALIGNMENT (16)


/*----------------------------------------------------------------------------*/
/*---------------------------- Interface default -----------------------------*/
/*----------------------------------------------------------------------------*/



/**
 * \brief Basic static function for the interface 'default'.
 * 
 * \param [in] instream_network_mgmt_stream_from_host_tx_framed Stream "network_mgmt_stream_from_host_tx_framed".
 * \param [in] instream_size_network_mgmt_stream_from_host_tx_framed The size of the stream instream_network_mgmt_stream_from_host_tx_framed in bytes.
 * \param [out] outstream_network_mgmt_stream_to_host_rx_framed Stream "network_mgmt_stream_to_host_rx_framed".
 * \param [in] outstream_size_network_mgmt_stream_to_host_rx_framed The size of the stream outstream_network_mgmt_stream_to_host_rx_framed in bytes.
 * \param [out] outstream_toCPU Stream "toCPU".
 * \param [in] outstream_size_toCPU The size of the stream outstream_toCPU in bytes.
 */
void MarketDataServer(
	const void *instream_network_mgmt_stream_from_host_tx_framed,
	size_t instream_size_network_mgmt_stream_from_host_tx_framed,
	void *outstream_network_mgmt_stream_to_host_rx_framed,
	size_t outstream_size_network_mgmt_stream_to_host_rx_framed,
	void *outstream_toCPU,
	size_t outstream_size_toCPU);

/**
 * \brief Basic static non-blocking function for the interface 'default'.
 * 
 * Schedule to run on an engine and return immediately.
 * The status of the run can be checked either by ::max_wait or ::max_nowait;
 * note that one of these *must* be called, so that associated memory can be released.
 * 
 * 
 * \param [in] instream_network_mgmt_stream_from_host_tx_framed Stream "network_mgmt_stream_from_host_tx_framed".
 * \param [in] instream_size_network_mgmt_stream_from_host_tx_framed The size of the stream instream_network_mgmt_stream_from_host_tx_framed in bytes.
 * \param [out] outstream_network_mgmt_stream_to_host_rx_framed Stream "network_mgmt_stream_to_host_rx_framed".
 * \param [in] outstream_size_network_mgmt_stream_to_host_rx_framed The size of the stream outstream_network_mgmt_stream_to_host_rx_framed in bytes.
 * \param [out] outstream_toCPU Stream "toCPU".
 * \param [in] outstream_size_toCPU The size of the stream outstream_toCPU in bytes.
 * \return A handle on the execution status, or NULL in case of error.
 */
max_run_t *MarketDataServer_nonblock(
	const void *instream_network_mgmt_stream_from_host_tx_framed,
	size_t instream_size_network_mgmt_stream_from_host_tx_framed,
	void *outstream_network_mgmt_stream_to_host_rx_framed,
	size_t outstream_size_network_mgmt_stream_to_host_rx_framed,
	void *outstream_toCPU,
	size_t outstream_size_toCPU);

/**
 * \brief Advanced static interface, structure for the engine interface 'default'
 * 
 */
typedef struct { 
	const void *instream_network_mgmt_stream_from_host_tx_framed; /**<  [in] Stream "network_mgmt_stream_from_host_tx_framed". */
	size_t instream_size_network_mgmt_stream_from_host_tx_framed; /**<  [in] The size of the stream instream_network_mgmt_stream_from_host_tx_framed in bytes. */
	void *outstream_network_mgmt_stream_to_host_rx_framed; /**<  [out] Stream "network_mgmt_stream_to_host_rx_framed". */
	size_t outstream_size_network_mgmt_stream_to_host_rx_framed; /**<  [in] The size of the stream outstream_network_mgmt_stream_to_host_rx_framed in bytes. */
	void *outstream_toCPU; /**<  [out] Stream "toCPU". */
	size_t outstream_size_toCPU; /**<  [in] The size of the stream outstream_toCPU in bytes. */
} MarketDataServer_actions_t;

/**
 * \brief Advanced static function for the interface 'default'.
 * 
 * \param [in] engine The engine on which the actions will be executed.
 * \param [in,out] interface_actions Actions to be executed.
 */
void MarketDataServer_run(
	max_engine_t *engine,
	MarketDataServer_actions_t *interface_actions);

/**
 * \brief Advanced static non-blocking function for the interface 'default'.
 *
 * Schedule the actions to run on the engine and return immediately.
 * The status of the run can be checked either by ::max_wait or ::max_nowait;
 * note that one of these *must* be called, so that associated memory can be released.
 *
 * 
 * \param [in] engine The engine on which the actions will be executed.
 * \param [in] interface_actions Actions to be executed.
 * \return A handle on the execution status of the actions, or NULL in case of error.
 */
max_run_t *MarketDataServer_run_nonblock(
	max_engine_t *engine,
	MarketDataServer_actions_t *interface_actions);

/**
 * \brief Group run advanced static function for the interface 'default'.
 * 
 * \param [in] group Group to use.
 * \param [in,out] interface_actions Actions to run.
 *
 * Run the actions on the first device available in the group.
 */
void MarketDataServer_run_group(max_group_t *group, MarketDataServer_actions_t *interface_actions);

/**
 * \brief Group run advanced static non-blocking function for the interface 'default'.
 * 
 *
 * Schedule the actions to run on the first device available in the group and return immediately.
 * The status of the run must be checked with ::max_wait. 
 * Note that use of ::max_nowait is prohibited with non-blocking running on groups:
 * see the ::max_run_group_nonblock documentation for more explanation.
 *
 * \param [in] group Group to use.
 * \param [in] interface_actions Actions to run.
 * \return A handle on the execution status of the actions, or NULL in case of error.
 */
max_run_t *MarketDataServer_run_group_nonblock(max_group_t *group, MarketDataServer_actions_t *interface_actions);

/**
 * \brief Array run advanced static function for the interface 'default'.
 * 
 * \param [in] engarray The array of devices to use.
 * \param [in,out] interface_actions The array of actions to run.
 *
 * Run the array of actions on the array of engines.  The length of interface_actions
 * must match the size of engarray.
 */
void MarketDataServer_run_array(max_engarray_t *engarray, MarketDataServer_actions_t *interface_actions[]);

/**
 * \brief Array run advanced static non-blocking function for the interface 'default'.
 * 
 *
 * Schedule to run the array of actions on the array of engines, and return immediately.
 * The length of interface_actions must match the size of engarray.
 * The status of the run can be checked either by ::max_wait or ::max_nowait;
 * note that one of these *must* be called, so that associated memory can be released.
 *
 * \param [in] engarray The array of devices to use.
 * \param [in] interface_actions The array of actions to run.
 * \return A handle on the execution status of the actions, or NULL in case of error.
 */
max_run_t *MarketDataServer_run_array_nonblock(max_engarray_t *engarray, MarketDataServer_actions_t *interface_actions[]);

/**
 * \brief Converts a static-interface action struct into a dynamic-interface max_actions_t struct.
 *
 * Note that this is an internal utility function used by other functions in the static interface.
 *
 * \param [in] maxfile The maxfile to use.
 * \param [in] interface_actions The interface-specific actions to run.
 * \return The dynamic-interface actions to run, or NULL in case of error.
 */
max_actions_t* MarketDataServer_convert(max_file_t *maxfile, MarketDataServer_actions_t *interface_actions);

/**
 * \brief Initialise a maxfile.
 */
max_file_t* MarketDataServer_init(void);

/* Error handling functions */
int MarketDataServer_has_errors(void);
const char* MarketDataServer_get_errors(void);
void MarketDataServer_clear_errors(void);
/* Free statically allocated maxfile data */
void MarketDataServer_free(void);
/* returns: -1 = error running command; 0 = no error reported */
int MarketDataServer_simulator_start(void);
/* returns: -1 = error running command; 0 = no error reported */
int MarketDataServer_simulator_stop(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* SLIC_DECLARATIONS_MarketDataServer_H */

