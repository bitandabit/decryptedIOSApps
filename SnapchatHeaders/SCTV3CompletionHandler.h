//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TCV3CompletionHandler-Protocol.h"

@interface SCTV3CompletionHandler : NSObject <TCV3CompletionHandler>
{
    CDUnknownBlockType _completion;
}

+ (id)completion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)onCompletion;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

@end

