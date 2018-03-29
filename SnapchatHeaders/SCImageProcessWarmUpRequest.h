//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCImageProcessRequest-Protocol.h"

@class NSArray, NSString;

@interface SCImageProcessWarmUpRequest : NSObject <SCImageProcessRequest>
{
    NSArray *_commands;
    struct CGSize _outputSize;
    unsigned long long _status;
}

@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)cancel;
- (void)runProgramsWithContext:(id)arg1 GPUAvailable:(_Bool)arg2;
@property(readonly, nonatomic) _Bool GPURequired;
- (id)initWithCommands:(id)arg1 outputSize:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

