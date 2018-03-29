//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUAuthPayload-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUDiscoverConversationShareMediaRequest <NSObject, NSCoding, NSCopying, SOJUAuthPayload>
@property(readonly, copy, nonatomic) NSNumber *sendStartTimestamp;
@property(readonly, copy, nonatomic) NSString *mediaAttributes;
@property(readonly, copy, nonatomic) NSString *seqNums;
@property(readonly, copy, nonatomic) NSNumber *mediaHeight;
@property(readonly, copy, nonatomic) NSNumber *mediaWidth;
@property(readonly, copy, nonatomic) NSString *mediaEncIv;
@property(readonly, copy, nonatomic) NSString *mediaEncKey;
@property(readonly, copy, nonatomic) NSNumber *typeVersion;
@property(readonly, copy, nonatomic) NSString *bodyType;
@property(readonly, copy, nonatomic) NSString *mediaType;
@property(readonly, copy, nonatomic) NSString *mediaId;
@property(readonly, copy, nonatomic) NSString *recipientIds;
@property(readonly, copy, nonatomic) NSString *recipients;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, copy, nonatomic) NSString *reqToken;
@property(readonly, copy, nonatomic) NSString *timestamp;
@end
