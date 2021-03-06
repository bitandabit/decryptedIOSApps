//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCChatCallingAccessoryListener-Protocol.h"

@class NSString;

@interface SCChatCallingAccessoryListenerAnnouncer : NSObject <SCChatCallingAccessoryListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCChatCallingAccessoryListener>, std::__1::allocator<__weak id<SCChatCallingAccessoryListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)chatInputController:(id)arg1 callingAccessorySelected:(unsigned long long)arg2 previouslySelected:(unsigned long long)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

