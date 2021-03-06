/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@class HMDIDSMessageDispatcher, HMMessageDispatcher, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMDNotificationRelay : NSObject <HMMessageReceiver> {
    HMDIDSMessageDispatcher *_msgDispatcher;
    HMMessageDispatcher *_notificationRelayDispatcher;
    NSMutableDictionary *_pendingNotifications;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) NSObject<OS_dispatch_queue> * messageReceiveQueue;
@property(readonly) NSUUID * messageTargetUUID;
@property HMDIDSMessageDispatcher * msgDispatcher;
@property HMMessageDispatcher * notificationRelayDispatcher;
@property(retain) NSMutableDictionary * pendingNotifications;
@property(readonly) Class superclass;
@property(retain) NSUUID * uuid;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;

- (void).cxx_destruct;
- (void)_handleNotification:(id)arg1;
- (void)_registerForNotifications;
- (void)_relayResponseForNotificationState:(id)arg1;
- (void)addPendingNotification:(id)arg1 forDestination:(id)arg2 responseQueue:(id)arg3 responseHandler:(id)arg4;
- (void)dealloc;
- (id)initWithMessageDispatcher:(id)arg1 notificationRelayDispatcher:(id)arg2;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)notificationRelayDispatcher;
- (id)pendingNotifications;
- (void)removePendingNotification:(id)arg1;
- (void)sendResponse:(id)arg1 error:(id)arg2 forMessage:(id)arg3;
- (void)setMsgDispatcher:(id)arg1;
- (void)setNotificationRelayDispatcher:(id)arg1;
- (void)setPendingNotifications:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)uuid;
- (id)workQueue;

@end
