//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface SCPBBlizzardClientConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *blacklistedEventsArray; // @dynamic blacklistedEventsArray;
@property(readonly, nonatomic) unsigned long long blacklistedEventsArray_Count; // @dynamic blacklistedEventsArray_Count;
@property(retain, nonatomic) NSMutableArray *criticalEventNamesArray; // @dynamic criticalEventNamesArray;
@property(readonly, nonatomic) unsigned long long criticalEventNamesArray_Count; // @dynamic criticalEventNamesArray_Count;
@property(retain, nonatomic) NSMutableArray *defaultLoggersArray; // @dynamic defaultLoggersArray;
@property(readonly, nonatomic) unsigned long long defaultLoggersArray_Count; // @dynamic defaultLoggersArray_Count;
@property(retain, nonatomic) NSMutableDictionary *eventPrefixToLoggersMap; // @dynamic eventPrefixToLoggersMap;
@property(readonly, nonatomic) unsigned long long eventPrefixToLoggersMap_Count; // @dynamic eventPrefixToLoggersMap_Count;
@property(nonatomic) int eventUploadIntervalMillis; // @dynamic eventUploadIntervalMillis;
@property(nonatomic) int eventUploadMaxBatchSize; // @dynamic eventUploadMaxBatchSize;
@property(nonatomic) int eventUploadTimeoutMillis; // @dynamic eventUploadTimeoutMillis;
@property(retain, nonatomic) NSMutableDictionary *eventnameToLoggersMap; // @dynamic eventnameToLoggersMap;
@property(readonly, nonatomic) unsigned long long eventnameToLoggersMap_Count; // @dynamic eventnameToLoggersMap_Count;
@property(nonatomic) _Bool fireAndForgetLogEnabled; // @dynamic fireAndForgetLogEnabled;
@property(nonatomic) float gceCollectorTrafficPercent; // @dynamic gceCollectorTrafficPercent;
@property(copy, nonatomic) NSString *gceCollectorURL; // @dynamic gceCollectorURL;
@property(retain, nonatomic) NSMutableArray *loggersArray; // @dynamic loggersArray;
@property(readonly, nonatomic) unsigned long long loggersArray_Count; // @dynamic loggersArray_Count;
@property(nonatomic) int overflowRemoveBatchSize; // @dynamic overflowRemoveBatchSize;
@property(nonatomic) int overflowThresholdEventCount; // @dynamic overflowThresholdEventCount;
@property(nonatomic) int saveBatchSize; // @dynamic saveBatchSize;
@property(nonatomic) int uploadEventThreshold; // @dynamic uploadEventThreshold;
@property(copy, nonatomic) NSString *version; // @dynamic version;

@end
