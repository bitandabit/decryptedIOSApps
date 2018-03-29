//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTLogger.h"

@class NSString;

@interface SPTLogger : NSObject <SPTLogger>
{
    shared_ptr_0bb93f61 _logger;
    struct PendingMessageStorage *_pendingStorage;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)sendMessageWithSequenceNumber:(id)arg1 messageName:(id)arg2;
- (void)updateMessageWithSequenceNumber:(id)arg1 messageName:(id)arg2 serializedMessage:(id)arg3;
- (id)createMessage:(id)arg1;
- (void)sendMessage:(id)arg1;
- (id)initWithCoreLogger:(const shared_ptr_0bb93f61 *)arg1 pendingStorage:(struct PendingMessageStorage *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

