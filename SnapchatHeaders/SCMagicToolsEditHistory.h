//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SCMagicToolsEditHistory : NSObject
{
    long long _editQueueSize;
    NSMutableArray *_editQueue;
    long long _undoStatus;
}

@property(nonatomic) long long undoStatus; // @synthesize undoStatus=_undoStatus;
@property(retain, nonatomic) NSMutableArray *editQueue; // @synthesize editQueue=_editQueue;
@property(nonatomic) long long editQueueSize; // @synthesize editQueueSize=_editQueueSize;
- (void).cxx_destruct;
- (id)init;

@end

