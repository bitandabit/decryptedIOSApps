//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ADLStringDictResponder-Protocol.h"

@interface StringDictResponder : NSObject <ADLStringDictResponder>
{
    CDUnknownBlockType _cb;
    CDUnknownBlockType _err;
}

+ (id)onCompletion:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)onError:(int)arg1 message:(id)arg2;
- (void)onCompletion:(struct NSDictionary *)arg1;
- (id)initWithOnCompletion:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;

@end

