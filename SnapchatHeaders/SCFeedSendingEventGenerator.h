//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeedEventGenerator.h"

@class NSMutableDictionary;

@interface SCFeedSendingEventGenerator : SCFeedEventGenerator
{
    NSMutableDictionary *_sendingMessages;
}

- (void).cxx_destruct;
- (id)conversationToInteractionEvent:(id)arg1 messageIdToMetadataMap:(id)arg2;
- (void)removeMessageWithMessageId:(id)arg1;
- (void)updateWithMessage:(id)arg1;
- (id)initWithGeneratorType:(long long)arg1 username:(id)arg2 userId:(id)arg3 conversationId:(id)arg4;

@end

