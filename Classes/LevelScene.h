//
//  LevelScene.h
//  SlideBlock
//
//  Created by Hoang Nguyen on 12/9/16.
//
//

#ifndef LevelScene_h
#define LevelScene_h

#include <stdio.h>
#include "cocos2d.h"
#include "ui/CocosGUI.h"
USING_NS_CC;
class LevelScene : public Layer {
public:
    Size winsize;
    int typeLevel;
    ui::Button* btnNext;
    ui::Button* btnPrevious;
    int currentPage;
    cocos2d::ui::PageView* pageView;
    
    int hightLevel;
    int director;

public:
    LevelScene();
    void initUI();
    virtual ~LevelScene();
    static Scene* createLevelGameScene(int typeLevel, int director);
    void pageViewEventCustom(Ref *pSender, cocos2d::ui::PageView::EventType type);
    CREATE_FUNC(LevelScene);
    void btnClickButton(Ref* pSender);
    void btnClickButtonLevel(Ref* pSender);
    void onEnter();
    void onExit();
};

#endif /* LevelScene_h */
