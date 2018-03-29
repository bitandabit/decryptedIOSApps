//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BTLogger : NSObject
{
    unsigned long long _level;
    CDUnknownBlockType _logBlock;
}

+ (id)levelString:(unsigned long long)arg1;
+ (id)sharedLogger;
@property(copy, nonatomic) CDUnknownBlockType logBlock; // @synthesize logBlock=_logBlock;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
- (void).cxx_destruct;
- (void)logLevel:(unsigned long long)arg1 format:(id)arg2 arguments:(char *)arg3;
- (void)debug:(id)arg1;
- (void)info:(id)arg1;
- (void)warning:(id)arg1;
- (void)error:(id)arg1;
- (void)critical:(id)arg1;
- (void)log:(id)arg1;
- (id)init;

@end

