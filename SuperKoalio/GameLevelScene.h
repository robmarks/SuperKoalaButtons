//
//  GameLevelScene.h
//  SuperKoalio
//

//  Copyright (c) 2013 Razeware, LLC. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface GameLevelScene : SKScene
@property (nonatomic, assign) CGPoint velocity;
@property (nonatomic, assign) CGPoint desiredPosition;
@property (nonatomic, assign) BOOL onGround;
@property (nonatomic, assign) BOOL forwardMarch;
@property (nonatomic, assign) BOOL mightAsWellJump;

@end
