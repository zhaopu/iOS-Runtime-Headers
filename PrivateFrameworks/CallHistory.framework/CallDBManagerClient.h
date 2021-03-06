/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@class NSXPCConnection;

@interface CallDBManagerClient : CallDBManager {
    NSXPCConnection *_helperConnection;
    int _retryCount;
    id _syncHelperReadyNotificationRef;
}

@property(retain) NSXPCConnection * helperConnection;
@property int retryCount;
@property(retain) id syncHelperReadyNotificationRef;

- (void).cxx_destruct;
- (void)createHelperConnection;
- (void)createPermanent;
- (void)createTemporary;
- (void)handlePermanentCreated;
- (id)helperConnection;
- (id)init;
- (void)moveCallsFromTempDatabase;
- (id)permDBLocation;
- (void)pokeSyncHelperToInitDB;
- (int)retryCount;
- (void)setHelperConnection:(id)arg1;
- (void)setRetryCount:(int)arg1;
- (void)setSyncHelperReadyNotificationRef:(id)arg1;
- (id)syncHelperReadyNotificationRef;
- (id)tempDBLocation;
- (BOOL)willMoveCallsFromTempDatabase;

@end
