/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSPersistentStore, NSSQLiteConnection, NSString, PFUbiquityLocation;

@interface PFUbiquityStoreMetadataMedic : NSObject {
    NSSQLiteConnection *_connection;
    NSString *_localPeerID;
    NSPersistentStore *_store;
    NSString *_storeName;
    PFUbiquityLocation *_ubiquityRootLocation;
}

@property(readonly) NSSQLiteConnection * connection;
@property(readonly) NSString * localPeerID;
@property(readonly) NSPersistentStore * store;
@property(readonly) NSString * storeName;
@property(readonly) PFUbiquityLocation * ubiquityRootLocation;

- (BOOL)addTransactionHistoryEntriesForObjectIDs:(id)arg1 withImportContext:(id)arg2 error:(id*)arg3;
- (BOOL)cacheMetadataForTransactionLog:(id)arg1 withImportContext:(id)arg2 error:(id*)arg3;
- (id)connection;
- (void)dealloc;
- (id)initWithStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (id)localPeerID;
- (BOOL)recoverBaselineMetadataWithImportContext:(id)arg1 error:(id*)arg2;
- (BOOL)recoverMetadataWithError:(id*)arg1;
- (BOOL)recoverTransactionLogMetadataWithImportContext:(id)arg1 error:(id*)arg2;
- (id)store;
- (id)storeName;
- (id)ubiquityRootLocation;

@end
