//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber;

@interface SCADeviceStorageDiskUsage : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *storageTotalSizeKb;
    NSNumber *storageFileCount;
    NSNumber *storageUserSpaceFreeKb;
    NSNumber *storageUserSpaceKb;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (long long)getStorageUserSpaceKb;
- (void)setStorageUserSpaceKb:(long long)arg1;
- (long long)getStorageUserSpaceFreeKb;
- (void)setStorageUserSpaceFreeKb:(long long)arg1;
- (long long)getStorageFileCount;
- (void)setStorageFileCount:(long long)arg1;
- (long long)getStorageTotalSizeKb;
- (void)setStorageTotalSizeKb:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

