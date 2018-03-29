//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSFastEnumeration-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, Snap;

@interface SCChatMessages : NSObject <NSFastEnumeration, NSCoding>
{
    NSMutableArray *_messagesArray;
    NSMutableDictionary *_messagesDictionary;
    NSString *_chatsIterToken;
    Snap *_lastReceivedSnap;
    NSMutableArray *_messagesArrayToBeArchived;
    NSMutableDictionary *_messagesDictionaryToBeArchived;
    NSString *_chatsIterTokenToArchive;
}

@property(copy, nonatomic) NSString *chatsIterTokenToArchive; // @synthesize chatsIterTokenToArchive=_chatsIterTokenToArchive;
@property(readonly, nonatomic) NSMutableDictionary *messagesDictionaryToBeArchived; // @synthesize messagesDictionaryToBeArchived=_messagesDictionaryToBeArchived;
@property(readonly, nonatomic) NSMutableArray *messagesArrayToBeArchived; // @synthesize messagesArrayToBeArchived=_messagesArrayToBeArchived;
@property(retain, nonatomic) Snap *lastReceivedSnap; // @synthesize lastReceivedSnap=_lastReceivedSnap;
@property(copy, nonatomic) NSString *chatsIterToken; // @synthesize chatsIterToken=_chatsIterToken;
- (void).cxx_destruct;
- (void)_updateLastReceivedSnap:(id)arg1;
- (_Bool)suppressUnviewableSnaps;
- (id)sentSnaps;
- (id)snapsToView;
- (id)allMessagesOfType:(Class)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)messageWithMessageId:(id)arg1;
- (id)messages;
- (void)sort;
- (id)reverseObjectEnumerator;
- (unsigned long long)count;
- (id)lastObject;
- (_Bool)containsObject:(id)arg1;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)removeObject:(id)arg1;
- (void)removeObjects:(id)arg1;
- (void)addObject:(id)arg1;
- (void)addObjects:(id)arg1;
- (id)description;
- (id)chatsIterTokenFromMessages:(id)arg1;
- (void)willEncodeObject;
- (void)didDecodeObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

