//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUSnap-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUMediaUrl, SOJUSnapMetadata;

@protocol SOJUReceivedSnap <NSObject, NSCoding, NSCopying, SOJUSnap>
@property(readonly, copy, nonatomic) NSString *animatedSnapType;
@property(readonly, copy, nonatomic) NSString *contextHint;
@property(readonly, copy, nonatomic) SOJUMediaUrl *directDownloadUrl;
@property(readonly, copy, nonatomic) NSNumber *fiRetried;
@property(readonly, copy, nonatomic) NSNumber *fiSnapReleaseTs;
@property(readonly, copy, nonatomic) NSString *fiSenderOutBeta;
@property(readonly, copy, nonatomic) NSNumber *isInfiniteDuration;
@property(readonly, copy, nonatomic) NSArray *snapAttachments;
@property(readonly, copy, nonatomic) NSString *venueId;
@property(readonly, copy, nonatomic) NSString *fiSnapIv;
@property(readonly, copy, nonatomic) NSString *fiSnapKey;
@property(readonly, copy, nonatomic) NSDictionary *fideliusInfo;
@property(readonly, copy, nonatomic) NSNumber *fiSendTimestamp;
@property(readonly, copy, nonatomic) NSString *fiRecipientOutAlpha;
@property(readonly, copy, nonatomic) NSString *fiSenderOutAlpha;
@property(readonly, copy, nonatomic) NSNumber *fiVersion;
@property(readonly, copy, nonatomic) NSString *esId;
@property(readonly, copy, nonatomic) NSArray *uvTags;
@property(readonly, copy, nonatomic) NSString *egData;
@property(readonly, copy, nonatomic) NSString *lensId;
@property(readonly, copy, nonatomic) NSString *filterId;
@property(readonly, copy, nonatomic) NSNumber *broadcastHideTimer;
@property(readonly, copy, nonatomic) NSString *broadcastSecondaryText;
@property(readonly, copy, nonatomic) NSString *broadcastActionText;
@property(readonly, copy, nonatomic) NSString *broadcastUrl;
@property(readonly, copy, nonatomic) NSString *broadcastMediaUrl;
@property(readonly, copy, nonatomic) NSNumber *broadcast;
@property(readonly, copy, nonatomic) NSNumber *mo;
@property(readonly, copy, nonatomic) NSNumber *capOriDeprecated;
@property(readonly, copy, nonatomic) NSNumber *capPosDeprecated;
@property(readonly, copy, nonatomic) NSString *capTextDeprecated;
@property(readonly, copy, nonatomic) NSNumber *timer;
@property(readonly, copy, nonatomic) NSNumber *t;
@property(readonly, copy, nonatomic) NSString *sn;
@property(readonly, copy, nonatomic) NSNumber *seqNum;
@property(readonly, copy, nonatomic) NSArray *replyMedias;
@property(readonly, copy, nonatomic) NSNumber *sendStartTimestamp;
@property(readonly, copy, nonatomic) SOJUSnapMetadata *snapMetadata;
@property(readonly, copy, nonatomic) NSNumber *orientation;
@property(readonly, copy, nonatomic) NSNumber *pts;
@property(readonly, copy, nonatomic) NSNumber *zipped;
@property(readonly, copy, nonatomic) NSNumber *sts;
@property(readonly, copy, nonatomic) NSNumber *ts;
@property(readonly, copy, nonatomic) NSNumber *m;
@property(readonly, copy, nonatomic) NSNumber *st;
@property(readonly, copy, nonatomic) NSString *idValue;
@end

