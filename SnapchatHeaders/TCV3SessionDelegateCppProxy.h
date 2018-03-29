//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TCV3SessionDelegate-Protocol.h"

@interface TCV3SessionDelegateCppProxy : NSObject <TCV3SessionDelegate>
{
    struct Handle<std::__1::shared_ptr<talkcorev3::SessionDelegate>, std::__1::shared_ptr<talkcorev3::SessionDelegate>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)sendLocalState:(id)arg1 action:(id)arg2 media:(long long)arg3;
- (void)onSpeechActivity:(id)arg1;
- (void)onStateChanged:(long long)arg1;
- (void)refreshAuth:(id)arg1;
- (id)getConversationCtx;
- (id)initWithCpp:(const shared_ptr_ba403e89 *)arg1;

@end

