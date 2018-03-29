//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUConversationMessage-Protocol.h"

@class NSDictionary, NSNumber, NSString, SOJUHeader, SOJUHereAuth;

@protocol SOJUPresenceMessage <NSObject, NSCoding, NSCopying, SOJUConversationMessage>
@property(readonly, copy, nonatomic) NSDictionary *presencesMetadata;
@property(readonly, copy, nonatomic) NSDictionary *extendedPresences;
@property(readonly, copy, nonatomic) SOJUHereAuth *hereAuth;
@property(readonly, copy, nonatomic) NSNumber *receivingVideo;
@property(readonly, copy, nonatomic) NSNumber *supportsHere;
@property(readonly, copy, nonatomic) NSDictionary *presences;
@property(readonly, copy, nonatomic) NSString *appEngineTarget;
@property(readonly, copy, nonatomic) NSString *idValue;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) NSNumber *timestamp;
@property(readonly, copy, nonatomic) NSNumber *seqNum;
@property(readonly, copy, nonatomic) NSNumber *mischiefVersion;
@property(readonly, copy, nonatomic) NSDictionary *knownChatSequenceNumbers;
@property(readonly, copy, nonatomic) NSNumber *retried;
@property(readonly, copy, nonatomic) SOJUHeader *header;
@end

