//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TCV3CompletionHandler-Protocol.h"

@interface TCV3CompletionHandlerCppProxy : NSObject <TCV3CompletionHandler>
{
    struct Handle<std::__1::shared_ptr<talkcorev3::CompletionHandler>, std::__1::shared_ptr<talkcorev3::CompletionHandler>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onCompletion;
- (id)initWithCpp:(const shared_ptr_acde51be *)arg1;

@end
