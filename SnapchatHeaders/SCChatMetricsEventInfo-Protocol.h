//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSDate, NSNumber, NSString;

@protocol SCChatMetricsEventInfo <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) _Bool isForwarded;
@property(readonly, nonatomic) long long stickerSource;
@property(readonly, nonatomic) long long mediaDrawerTab;
@property(readonly, nonatomic) long long chatSource;
@property(readonly, nonatomic) id snapCommonLoggingParameters;
@property(readonly, copy, nonatomic) NSNumber *durationInSeconds;
@property(readonly, nonatomic) long long sourceDrawerViewMode;
@property(readonly, nonatomic) long long sourceDrawerPosition;
@property(readonly, copy, nonatomic) NSString *sourceStickerPack;
@property(readonly, copy, nonatomic) NSDate *releaseTimestamp;
@property(readonly, copy, nonatomic) NSArray *recipientUsernames;
@property(readonly, copy, nonatomic) NSNumber *recipientCount;
@property(readonly, copy, nonatomic) NSNumber *userPresentCount;
@property(readonly, copy, nonatomic) NSArray *mischiefIds;
@end

