//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol SCChatSendBlockAssignerDelegate;

@interface SCChatConversationSendBlockAssigner : NSObject
{
    NSMutableDictionary *_sendingBlockIds;
    NSMutableSet *_failedAtleastOnceMessages;
    long long _currentHighestGroupId;
    id <SCChatSendBlockAssignerDelegate> _delegate;
}

@property(retain, nonatomic) id <SCChatSendBlockAssignerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_generateBlockIdForMessage:(id)arg1;
- (id)getBlockMessageIdsForMessage:(id)arg1;
- (_Bool)didMessageFailAtleastOnce:(id)arg1;
- (_Bool)message:(id)arg1 hasDifferentBlockId:(id)arg2;
- (id)updateBlockIdForMessage:(id)arg1 withPreviousMessage:(id)arg2;
- (id)initWithMessageIdsToBlockIds:(struct NSDictionary *)arg1;
- (id)init;

@end

