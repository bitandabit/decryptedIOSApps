//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, SCUserSession;
@protocol SCChatViewControllerParentDelegate;

@interface SCChatChildViewControllerFactory : NSObject
{
    SCUserSession *_userSession;
    NSMutableArray *_v2VCPool;
    NSMutableArray *_v3VCPool;
    id <SCChatViewControllerParentDelegate> _parentDelegate;
}

- (void).cxx_destruct;
- (void)warmup;
- (void)enqueue:(id)arg1;
- (id)dequeueChatV3ViewController;
- (id)dequeueChatV2ViewController;
- (id)initWithUserSession:(id)arg1 parentDelegate:(id)arg2;

@end

