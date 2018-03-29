//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEncryptedTable.h"

@class NSArray, SCFideliusColumn, SCFideliusTableSchema;

@interface SCFideliusFriendDeviceInfoTable : SCEncryptedTable
{
    SCFideliusTableSchema *_schema;
    NSArray *_indexes;
    SCFideliusColumn *_theirOutBetaCol;
    SCFideliusColumn *_theirUserIdCol;
    SCFideliusColumn *_mystiqueCol;
    SCFideliusColumn *_versionCol;
    SCFideliusColumn *_timestampCol;
}

- (void).cxx_destruct;
- (_Bool)deleteAllFriendDevicesForUserId:(id)arg1;
- (id)_friendDevicesForUserId:(id)arg1;
- (id)friendDevicesForUserId:(id)arg1;
- (id)friendDevicesDictForUserId:(id)arg1;
- (id)updateParametersForObject:(id)arg1;
- (id)objectFromRow:(id)arg1;
- (id)tableName;
- (id)indexes;
- (id)tableSchema;
- (id)initWithDatabase:(id)arg1 performer:(id)arg2;

@end

