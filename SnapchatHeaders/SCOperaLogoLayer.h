//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCOperaLayer-Protocol.h"

@class NSString, SCOperaPage, UIColor;

@interface SCOperaLogoLayer : NSObject <SCOperaLayer>
{
    _Bool _fadeDirectionIsLeft;
    SCOperaPage *_page;
    UIColor *_backgroundColor;
    UIColor *_logoBackgroundColor;
    NSString *_imageKey;
    double _logoWidthRatio;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(nonatomic) double logoWidthRatio; // @synthesize logoWidthRatio=_logoWidthRatio;
@property(nonatomic) _Bool fadeDirectionIsLeft; // @synthesize fadeDirectionIsLeft=_fadeDirectionIsLeft;
@property(readonly, nonatomic) NSString *imageKey; // @synthesize imageKey=_imageKey;
@property(readonly, nonatomic) UIColor *logoBackgroundColor; // @synthesize logoBackgroundColor=_logoBackgroundColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)type;
- (id)initWithProperties:(id)arg1 page:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

