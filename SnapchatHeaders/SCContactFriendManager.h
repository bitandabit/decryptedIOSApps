//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSSet, SCQueuePerformer;

@interface SCContactFriendManager : NSObject
{
    SCQueuePerformer *_updateQueuePerformer;
    NSSet *_contactSnapchatters;
}

@property(retain) NSSet *contactSnapchatters; // @synthesize contactSnapchatters=_contactSnapchatters;
- (void).cxx_destruct;
- (void)_updateContactSnapchatters;
- (_Bool)isNonFriendContactOnSnapchat:(id)arg1;
- (_Bool)isContactOnSnapchat:(id)arg1;
- (void)dealloc;
- (id)init;

@end
