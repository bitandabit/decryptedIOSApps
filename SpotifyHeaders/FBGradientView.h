//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBGradientViewConfig;

@interface FBGradientView : UIView
{
    FBGradientViewConfig *_config;
}

+ (id)newWithConfig:(id)arg1;
+ (id)newWithColors:(id)arg1;
+ (Class)layerClass;
@property(copy, nonatomic) FBGradientViewConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)applyConfig:(id)arg1;
- (id)_init;

@end

